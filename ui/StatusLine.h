//
//  StatusLine.h
//  Frotz
//
//  Created by Craig Smith on 2/9/10.
//  Copyright 2010 Craig Smith. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StoryMainViewController.h"
#import "FrotzView.h"

@interface StatusLine : FrotzView
{
    NSTimer *m_tapTimer;
}
- (BOOL)handleTouch: (UITouch*)touch withEvent: (UIEvent*)event;
@end

