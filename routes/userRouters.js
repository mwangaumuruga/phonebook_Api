import {  addUserToGroup } from "../controllers/userController.js"


const usersRouters = (app) => {
    app.route('/users')
    .post(addUserToGroup);

   

};

export default usersRouters;