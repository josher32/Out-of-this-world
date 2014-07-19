//
//  OWOuterSpaceTableVIewController.h
//  Out of this world
//
//  Created by h605506 on 6/21/14.
//  Copyright (c) 2014 Josher. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWAddSpaceObjectViewController.h"

@interface OWOuterSpaceTableVIewController : UITableViewController <OWAddSpaceObjectViewControllerDelegate>

@property (strong,nonatomic) NSMutableArray *planets;
@property (strong,nonatomic) NSMutableArray *addedSpaceObjects;

@end
