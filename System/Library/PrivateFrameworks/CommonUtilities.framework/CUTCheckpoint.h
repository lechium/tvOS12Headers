/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CommonUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying> {

	BOOL _frozen;
	BOOL _assertsUseAfterFreeze;
	BOOL _shouldLogTouches;
	NSString* _name;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL assertsUseAfterFreeze;                 //@synthesize assertsUseAfterFreeze=_assertsUseAfterFreeze - In the implementation block
@property (assign,nonatomic) BOOL shouldLogTouches;                      //@synthesize shouldLogTouches=_shouldLogTouches - In the implementation block
+(id)_reportDateFormatter;
+(id)_whitelistedClasses;
+(BOOL)supportsSecureCoding;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)_assertNotFrozen;
-(BOOL)assertsUseAfterFreeze;
-(void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3 ;
-(id)_reportName;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(id)_freezeBacktrace;
-(void)setAssertsUseAfterFreeze:(BOOL)arg1 ;
-(void)setShouldLogTouches:(BOOL)arg1 ;
-(id)_reportMetadata;
-(BOOL)shouldLogTouches;
-(id)report;
-(void)_freeze;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)freeze;
-(NSString *)uniqueIdentifier;
-(BOOL)isFrozen;
@end
