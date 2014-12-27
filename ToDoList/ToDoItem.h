//
//  ToDoItem.h
//  ToDoList
//
//  Created by Lonnie Rae on 12/27/14.
//  Copyright (c) 2014 Lonnie Rae. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
