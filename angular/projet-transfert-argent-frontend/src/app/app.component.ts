import { CommonModule, NgFor } from '@angular/common';
import { Component, signal,  Signal } from '@angular/core';

import { RouterOutlet } from '@angular/router';
import { TransfertComponent } from './transfert/transfert.component';
import { CreditComponen } from './credit/credit.component';
import { PaymentComponent } from './paiements/paiements.component';


interface Transaction {
  recipient: string;
  amount: number;
  date: string;
}

interface ActionButton {
  icon: string;
  label: string;
}

@Component({
  selector: 'app-root',
  standalone: true,

  imports: [RouterOutlet,NgFor,TransfertComponent, NgFor,CommonModule,CreditComponen,PaymentComponent],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  title = 'projet-transfert-argent-frontend';


   // Correction : currentView comme propriété normale au lieu de signal
   currentView: string | null = null;
  actionButtons: Signal<ActionButton[]> = signal([
    { icon: 'fas fa-user', label: 'Transfert' },
    { icon: 'fas fa-shopping-basket', label: 'Paiements' },
    { icon: 'fas fa-mobile-alt', label: 'Crédit' },
    { icon: 'fas fa-university', label: 'Banque' }
  ]);

  transactions: Signal<Transaction[]> = signal([
    {
      recipient: "Achat crédit pour le 77 679 58 40",
      amount: -500,
      date: "26 oct., 09:39"
    },
    {
      recipient: "À Oumar D 77 826 54 08",
      amount: -5050,
      date: "26 oct., 09:38"
    },
    {
      recipient: "À BIG LINE 78 475 16 39",
      amount: -1315,
      date: "25 oct., 21:09"
    },
    {
      recipient: "À Mouhamadou M D 78 534 29 48",
      amount: -2020,
      date: "24 oct., 11:34"
    },
    {
      recipient: "À Elimane M D 78 534 29 48",
      amount: -2020,
      date: "24 oct., 11:34"
    },
    {
      recipient: "À Moussa M D 78 534 29 48",
      amount: -2020,
      date: "24 oct., 11:34"
    }

  ]);



  // currentView: string | null = null;

  // toggleView(view: string) {
  //   this.currentView = view;
  // }

  toggleView(view: string): void {
    if (this.currentView === view) {
      // Si on clique sur le même bouton, on revient à la vue des transactions
      this.currentView = null;
    } else {
      // Sinon, on bascule vers la nouvelle vue
      this.currentView = view;
    }
  }
}
