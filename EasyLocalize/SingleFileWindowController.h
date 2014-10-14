//
//  SingleFileWindowController.h
//  EasyLocalize
//
//  Created by Sebastian Husche on 05.10.14.
//  Copyright (c) 2014 Sebastian Husche. All rights reserved.
//

@import Cocoa;
#import "StorageManager.h"

@interface SingleFileWindowController : NSWindowController

@property(nonatomic, strong) StorageManager *storageManager;

@end
