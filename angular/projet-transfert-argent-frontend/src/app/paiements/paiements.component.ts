import { Component } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';

interface PaymentCategory {
  icon: string;
  name: string;
}

interface PaymentService {
  logo: string;
  name: string;
}

@Component({
  selector: 'app-payment',
  standalone: true,
  imports: [CommonModule, FormsModule],
  templateUrl: './paiements.component.html',
  styleUrls: ['./paiements.component.css']
})
export class PaymentComponent {
  searchTerm: string = '';

  categories: PaymentCategory[] = [
    { icon: 'fas fa-lightbulb', name: 'Factures' },
    { icon: 'fas fa-hamburger', name: 'Restauration' },
    { icon: 'fas fa-shopping-bag', name: 'Shopping' },
    { icon: 'fas fa-umbrella-beach', name: 'Tourisme' }
  ];

  favoriteServices: PaymentService[] = [
    { logo: 'assets/logos/canal-plus.png', name: 'Canal+' },
    { logo: 'assets/logos/diounatoun.png', name: 'DIOUNATOUN LIMAN NAZAMAHO' },
    { logo: 'assets/logos/rapido.png', name: 'Rapido' },
    { logo: 'assets/logos/touba-ca-kanam.png', name: 'Touba Ca Kanam' },
    { logo: 'assets/logos/woyofal.png', name: 'Woyofal' }
  ];

  billServices: PaymentService[] = [
    { logo: 'assets/logos/aquatech.png', name: 'Aquatech' },
    { logo: 'assets/logos/baobab.png', name: 'Baobab+' },
    { logo: 'assets/logos/campusen.png', name: 'Campusen' }
  ];
}
