import sql from 'mssql';
import config from '../DataBase/config.js';


// add user to a group 
export const addUserToGroup = async (req, res) => {
  let connection;
  try {
    const { user_id, group_id } = req.body;

    connection = await sql.connect(config.sql);
    const result = await connection.request().query(`
        INSERT INTO user_groups (user_id, group_id)
        VALUES (${user_id}, ${group_id});
      `);

    res.send(result);
  } catch (error) {
    res.status(500).json({ error: 'An error occurred while adding the user to the group' });
  } finally {
    if (connection) {
      connection.close();
    }
  }
};

// delete user
export const deleteUser = async (req, res) => {
  let connection;
  try {
    connection = await sql.connect(config.sql);
    const result = await connection.request()
      .input('id', sql.Int, req.params.id)
      .query('DELETE FROM users WHERE userId = @id');
    res.send(result)
  }
  catch (error) {
    res.status(500).json({ error })
  }
  finally {
    if (connection) {
      connection.close();
    }
  }
}

// edit user 
export const editUser = async (req, res) => {
  let connection;
  try {
    const {user_id} =  req.params;
    const { full_name, email, phone_number, home_address, work_number } = req.body;

    connection = await sql.connect(config.sql);
    const result = await connection.request().query(`
      UPDATE users
      SET full_name = '${full_name}',
          email = '${email}',
          phone_number = '${phone_number}',
          home_address = '${home_address}',
          work_number = '${work_number}'
      WHERE user_id = ${user_id};
    `);

    res.send(result);
  } catch (error) {
    res.status(500).json({ error: 'An error occurred while editing the user' });
  } finally {
    if (connection) {
      connection.close();
    }
  }
};

// get all users 
export const getUsers = async (req, res) => {
    let connection; 
    try {
      connection = await sql.connect(config.sql);
      const result = await connection.request().query('SELECT * FROM users');
      res.send(result);
    } catch (error) {
      res.status(500).json({ error: 'An error occurred while retrieving users' });
    } finally {
      if (connection) {
        connection.close();
      }
 


