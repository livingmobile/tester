//
//  MasterViewController.h
//  test
//
//  Created by Thagoon Chartsutipol on 9/17/55 BE.
//  Copyright (c) 2555 LivingMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
