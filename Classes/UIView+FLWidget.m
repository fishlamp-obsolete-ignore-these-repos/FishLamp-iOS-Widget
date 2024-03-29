//
//  UIView+UIView_FLWidget.m
//  FishLampiOS
//
//  Created by Mike Fullerton on 7/19/12.
//  Copyright (c) 2013 GreenTongue Software LLC, Mike Fullerton. 
//  The FishLamp Framework is released under the MIT License: http://fishlamp.com/license 
//

#import "UIView+FLWidget.h"

@implementation UIView (FLWidget)

- (void) addWidget:(FLWidget*) widget {
    [widget removeFromParent];
    widget.parent = self;
}

- (void) removeWidget:(FLWidget*) widget {
    if(widget.parent == self) {
        widget.parent = nil;
        [self setNeedsDisplay];
    }
}

- (void) willRemoveSubWidget:(FLWidget*) widget {
}

- (void) widgetWasTouched:(FLWidget*) widget {
}


@end
