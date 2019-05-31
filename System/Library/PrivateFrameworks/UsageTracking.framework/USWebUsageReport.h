/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface USWebUsageReport : NSObject <NSSecureCoding> {

	NSString* _domainIdentifier;
	double _totalUsageTime;
	NSDictionary* _webUsageByDomain;

}

@property (copy,readonly) NSString * domainIdentifier;                  //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (readonly) double totalUsageTime;                             //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSDictionary * webUsageByDomain;              //@synthesize webUsageByDomain=_webUsageByDomain - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3 ;
-(double)totalUsageTime;
-(NSDictionary *)webUsageByDomain;
-(void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3 ;
@end

