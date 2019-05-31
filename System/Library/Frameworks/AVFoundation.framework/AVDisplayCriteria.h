/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject <NSCopying> {

	AVDisplayCriteriaInternal* _displayCriteria;

}

@property (nonatomic,readonly) float refreshRate; 
@property (readonly) int videoDynamicRange; 
-(id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2 ;
-(int)videoDynamicRange;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)refreshRate;
@end
