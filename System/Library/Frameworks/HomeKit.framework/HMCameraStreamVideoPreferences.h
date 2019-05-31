/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface HMCameraStreamVideoPreferences : NSObject <NSSecureCoding> {

	NSSet* _resolutions;

}

@property (nonatomic,readonly) NSSet * resolutions;              //@synthesize resolutions=_resolutions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithResolutions:(id)arg1 ;
-(NSSet *)resolutions;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

