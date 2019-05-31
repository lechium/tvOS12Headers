/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADChangeTrackingClientId : NSObject <NSSecureCoding> {

	NSString* _suffix;
	NSString* _customClientId;

}

@property (nonatomic,readonly) NSString * suffix;                      //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,readonly) NSString * customClientId;              //@synthesize customClientId=_customClientId - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomClientId; 
+(BOOL)supportsSecureCoding;
-(id)clientId;
-(BOOL)isEqualToChangeTrackingClientId:(id)arg1 ;
-(BOOL)hasCustomClientId;
-(id)clientIdWithBundleId:(id)arg1 ;
-(NSString *)customClientId;
-(id)initWithCustomClientId:(id)arg1 ;
-(id)initWithSuffix:(id)arg1 ;
-(NSString *)suffix;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

