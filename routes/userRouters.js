import { addUserToGroup } from "../controllers/userController.js";


const usersRouters = (app) => {
    app.route('/users')
        .post(addUserToGroup);
    app.route("/users/:id")
        .delete(deleteUser);


};

export default usersRouters;