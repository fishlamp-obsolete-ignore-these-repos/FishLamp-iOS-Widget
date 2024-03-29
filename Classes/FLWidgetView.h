//
//	FLView.h
//	FishLamp
//
//	Created by Mike Fullerton on 2/12/10.
//	Copyright (c) 2013 GreenTongue Software LLC, Mike Fullerton. 
//  The FishLamp Framework is released under the MIT License: http://fishlamp.com/license 
//

#import <Foundation/Foundation.h>

#import "FLWidget.h"
#import "FLArrangeableView.h"
#import "FLControlState.h"

#import "UIView+FLWidget.h"

@interface FLWidgetView : FLArrangeableView {
@private
	FLWidget* _rootWidget;
}

@property (readonly, strong, nonatomic) FLWidget* rootWidget;

@property (readwrite, assign, nonatomic) FLControlState controlState;

@property (readwrite, assign, nonatomic, getter=isSelected) BOOL selected;

@property (readwrite, assign, nonatomic, getter=isDoubleSelected) BOOL doubleSelected;

@property (readwrite, assign, nonatomic, getter=isHighlighted) BOOL highlighted; 

@property (readwrite, assign, nonatomic, getter=isDisabled) BOOL disabled; 

- (void) addWidget:(FLWidget*) widget;

@end
