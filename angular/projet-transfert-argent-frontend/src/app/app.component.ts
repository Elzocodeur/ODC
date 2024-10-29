// // app.component.ts
// import { CommonModule, NgFor } from '@angular/common';
// import { Component } from '@angular/core';
// import { RouterOutlet } from '@angular/router';
// import { TransfertComponent } from './transfert/transfert.component';
// import { CreditComponen } from './credit/credit.component';
// import { PaymentComponent } from './paiements/paiements.component';
// import { LoginComponent } from './login/login.component';
// import { SecretComponent } from './secret/secret.component';
// import { VerificationCodeComponent } from './verificationcode/verificationcode.component';

// interface Transaction {
//   recipient: string;
//   amount: number;
//   date: string;
// }

// interface ActionButton {
//   icon: string;
//   label: string;
// }

// @Component({
//   selector: 'app-root',
//   standalone: true,
//   imports: [
//     RouterOutlet,
//     NgFor,
//     TransfertComponent,
//     CreditComponen,
//     PaymentComponent,
//     LoginComponent,
//     CommonModule,
//     SecretComponent,
//     VerificationCodeComponent
//   ],
//   templateUrl: './app.component.html',
//   styleUrls: ['./app.component.css']
// })
// export class AppComponent {
//   title = 'projet-transfert-argent-frontend';

//   isLoggedIn: boolean = false;
//   showSecretComponent = false;
//   isWalletView = false;
//   currentView: string | null = null;

//   showSecret() {
//     this.showSecretComponent = true;
//   }

//   showWallet() {
//     this.isWalletView = true;
//   }

//   actionButtons = [
//     { icon: 'fas fa-user', label: 'Transfert' },
//     { icon: 'fas fa-shopping-basket', label: 'Paiements' },
//     { icon: 'fas fa-mobile-alt', label: 'Crédit' },
//     { icon: 'fas fa-university', label: 'Banque' }
//   ];

//   transactions = [
//     { recipient: "Achat crédit pour le 77 679 58 40", amount: -500, date: "26 oct., 09:39" },
//     { recipient: "À Oumar D 77 826 54 08", amount: -5050, date: "26 oct., 09:38" },
//     { recipient: "À BIG LINE 78 475 16 39", amount: -1315, date: "25 oct., 21:09" },
//     { recipient: "À Mouhamadou M D 78 534 29 48", amount: -2020, date: "24 oct., 11:34" },
//     { recipient: "À Elimane M D 78 534 29 48", amount: -2020, date: "24 oct., 11:34" },
//     { recipient: "À Moussa M D 78 534 29 48", amount: -2020, date: "24 oct., 11:34" }
//   ];

//   toggleView(view: string): void {
//     this.currentView = this.currentView === view ? null : view;
//   }
// }






import { CommonModule, NgFor } from '@angular/common';
import { Component } from '@angular/core';
import { RouterOutlet } from '@angular/router';
import { TransfertComponent } from './transfert/transfert.component';
import { CreditComponen } from './credit/credit.component';
import { PaymentComponent } from './paiements/paiements.component';
import { LoginComponent } from './login/login.component';
import { SecretComponent } from './secret/secret.component';
import { VerificationCodeComponent } from './verificationcode/verificationcode.component';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [
    RouterOutlet,
    NgFor,
    TransfertComponent,
    CreditComponen,
    PaymentComponent,
    LoginComponent,
    CommonModule,
    VerificationCodeComponent,
    SecretComponent
  ],
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'projet-transfert-argent-frontend';

  isLoggedIn: boolean = false;
  showSecretComponent = false;
  showVerificationComponent = false;
  isWalletView = false;
  currentView: string | null = null;

  showSecret() {
    this.showSecretComponent = true;
    this.showVerificationComponent = false;
  }

  showVerification() {
    this.showVerificationComponent = true;
    this.isLoggedIn = true;
  }

  showWallet() {
    this.isWalletView = true;
  }

  actionButtons = [
    { icon: 'fas fa-user', label: 'Transfert' },
    { icon: 'fas fa-shopping-basket', label: 'Paiements' },
    { icon: 'fas fa-mobile-alt', label: 'Crédit' },
    { icon: 'fas fa-university', label: 'Banque' }
  ];

  transactions = [
    { recipient: "Achat crédit pour le 77 679 58 40", amount: -500, date: "26 oct., 09:39" },
    { recipient: "À Oumar D 77 826 54 08", amount: -5050, date: "26 oct., 09:38" },
    { recipient: "À BIG LINE 78 475 16 39", amount: -1315, date: "25 oct., 21:09" },
    { recipient: "À Mouhamadou M D 78 534 29 48", amount: -2020, date: "24 oct., 11:34" },
    { recipient: "À Elimane M D 78 534 29 48", amount: -2020, date: "24 oct., 11:34" },
    { recipient: "À Moussa M D 78 534 29 48", amount: -2020, date: "24 oct., 11:34" }
  ];

  toggleView(view: string): void {
    this.currentView = this.currentView === view ? null : view;
  }
}
