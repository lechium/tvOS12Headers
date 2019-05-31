/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class NSArray;

@interface MPArrayPlaybackContext : MPPlaybackContext {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(Class)queueFeederClass;
+(BOOL)supportsSecureCoding;
-(id)initWithArrayQueueItems:(id)arg1 ;
-(id)descriptionComponents;
-(NSArray *)items;
@end

