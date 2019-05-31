/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults {

	PKServicePersonality* _personality;

}

@property (__weak) PKServicePersonality * personality;              //@synthesize personality=_personality - In the implementation block
-(id)initWithPersonality:(id)arg1 ;
-(void)setPersonality:(PKServicePersonality *)arg1 ;
-(PKServicePersonality *)personality;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)synchronize;
@end
