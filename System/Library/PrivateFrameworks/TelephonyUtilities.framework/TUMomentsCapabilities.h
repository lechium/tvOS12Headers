/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface TUMomentsCapabilities : NSObject <NSSecureCoding> {

	int _availability;
	NSSet* _supportedMediaTypes;

}

@property (nonatomic,readonly) int availability;                              //@synthesize availability=_availability - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supportedMediaTypes;              //@synthesize supportedMediaTypes=_supportedMediaTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)availability;
-(NSSet *)supportedMediaTypes;
-(BOOL)isEqualToCapabilities:(id)arg1 ;
-(id)initWithAvailability:(int)arg1 supportedMediaTypes:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
