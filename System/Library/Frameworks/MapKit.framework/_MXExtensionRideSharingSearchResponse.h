/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _MXExtensionRideSharingSearchResponse : NSObject <NSSecureCoding> {

	NSArray* _rides;

}

@property (nonatomic,retain) NSArray * rides;              //@synthesize rides=_rides - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)rides;
-(void)setRides:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

