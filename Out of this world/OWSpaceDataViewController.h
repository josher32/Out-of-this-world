//
//  OWSpaceDataViewController.h
//  Out of this world
//
//  Created by h605506 on 7/5/14.
//  Copyright (c) 2014 Josher. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
