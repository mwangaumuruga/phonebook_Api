import express from "express";
import config from "./DataBase/config.js";
import userRouters from './routes/userRouters.js';

const app = express();
// miidlewares 
app.use(express.json()); // for parsing application/json
app.use(express.urlencoded({extended: true}));

userRouters(app);

app.get("/", (req, res) => {
    res.send("Hello 🙌 DEV DYNAMOS");
});

app.listen(config.port, () => {
    console.log(`Server running at ${config.url}`);
});
