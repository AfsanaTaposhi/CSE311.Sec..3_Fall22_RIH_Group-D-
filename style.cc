* {
  margin: 0;
  padding: 0;
  font-family: "Franklin Gothic Medium", "Arial Narrow", Arial, sans-serif;
}

.hero {
  height: 100%;
  width: 100%;
  background-image: linear-gradient(rgba(0, 0, 0, 0.4), rgba(0, 0, 0, 0.4)),
    url(../Images/background01.jpg);
  background-position: center;
  background-size: cover;
  position: absolute;
}

.form-box {
  width: 380px;
  height: 600px;
  position: relative;
  margin: 6% auto;
  background: #fff;
  padding: 5px;
  overflow: hidden;
}

.button-box {
  width: 220px;
  margin: 35px auto;
  position: relative;
  box-shadow: 0 0 20px 9px #ff61241f;
  border-radius: 30px;
}

.toggle-btn {
  padding: 10px 30px;
  cursor: pointer;
  background: transparent;
  border: 0;
  outline: none;
  position: relative;
}

#btn {
  top: 0;
  left: 0;
  position: absolute;
  width: 110px;
  height: 100%;
  background: linear-gradient(to right, #43c2f5, #08ebebee);
  border-radius: 30px;
  transition: 0.5s;
}

.logo {
  margin: 30px auto;
  text-align: center;
}

.logo img {
  width: 70px;
}

.input-group {
  top: 180px;
  position: absolute;
  width: 280px;
  transition: 0.5s;
}

.input-field {
  width: 100%;
  padding: 10px 0;
  margin: 5px 0;
  border-left: 0;
  border-top: 0;
  border-right: 0;
  border-bottom: 1px solid#999;
  outline: none;
  background: transparent;
}

.submit-btn {
  width: 85%;
  padding: 10px;
  cursor: pointer;
  display: block;
  margin: auto;
  background: linear-gradient(to right, #43c2f5, #08ebebee);
  border: 0;
  outline: none;
  border-radius: 30px;
}

.check-box {
  margin: 10px 5px 10px 0;
  align-items: baseline;
}

label {
  color: rgb(9, 152, 247);
  font-size: 10px;
  position: relative;
  bottom: 3px;
}

.submit-btn a {
  text-decoration: none;
  color: black;
}

#login {
  left: 50px;
}

#Signup {
  left: 450px;
}
