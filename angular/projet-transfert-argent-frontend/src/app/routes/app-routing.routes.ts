// import { NgModule } from '@angular/core';
// import { RouterModule, Routes } from '@angular/router';
// import { LoginComponent } from '../login/login.component';
// import { SignupComponent } from '../signup/signup.component';

// const routes: Routes = [
//   { path: 'login', component: LoginComponent },
//   { path: 'signup', component: SignupComponent },
//   { path: '', redirectTo: '/login', pathMatch: 'full' }, // Redirect to login on initial load
// ];

// @NgModule({
//   imports: [RouterModule.forRoot(routes)],
//   exports: [RouterModule]
// })
// export class AppRoutingModule { }


import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { LoginComponent } from '../login/login.component';
import { VerificationCodeComponent } from '../verificationcode/verificationcode.component';
import { SecretComponent } from '../secret/secret.component';


const routes: Routes = [
  { path: '', component: LoginComponent },
  { path: 'verificationcode', component: VerificationCodeComponent },
  { path: 'secret', component: SecretComponent },

];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
