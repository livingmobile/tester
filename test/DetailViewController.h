//
//  DetailViewController.h
//  test
//
//  Created by Thagoon Chartsutipol on 9/17/55 BE.
//  Copyright (c) 2555 LivingMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
