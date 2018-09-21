//
//  AppDelegate.h
//  Inscript Task
//
//  Created by Dhawal Mahajan on 21/03/18.
//  Copyright © 2018 Dhawal Mahajan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

