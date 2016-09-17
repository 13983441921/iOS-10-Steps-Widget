//
//  ChartNodeView.h
//  LineChart
//
//  Created by Wildog on 9/16/16.
//  Copyright © 2016 Wildog. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChartNodeView : UIView

@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, assign) BOOL isActive;

- (void)toggleState;
@end
