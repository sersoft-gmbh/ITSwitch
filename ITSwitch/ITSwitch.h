//
//  ITSwitch.h
//  ITSwitch-Demo
//
//  Created by Ilija Tovilo on 01/02/14.
//  Copyright (c) 2014 Ilija Tovilo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

extern NSBindingName NSBindingNameChecked;

/**
 *  ITSwitch is a replica of UISwitch for Mac OS X
 */
IB_DESIGNABLE
@interface ITSwitch : NSControl

/**
 *  @property checked - Gets or sets the switches state
 */
@property (nonatomic, assign) IBInspectable BOOL checked;

/**
 *  @property tintColor - Gets or sets the switches tint
 */
@property (nonatomic, strong, null_resettable) IBInspectable NSColor *tintColor;

/**
 *  @property disabledBorderColor - Define the switch's border color for disabled state.
 */
@property (nonatomic, strong, null_resettable) IBInspectable NSColor *disabledBorderColor;

@end

NS_ASSUME_NONNULL_END
