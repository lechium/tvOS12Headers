/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSQuery.h>

@class NSString;

@interface LSExtensionPointQuery : _LSQuery {

	NSString* _identifier;
	NSString* _version;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * version;                 //@synthesize version=_version - In the implementation block
+(id)extensionPointQueryForIdentifier:(id)arg1 withVersion:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithIdentifier:(id)arg1 andVersion:(id)arg2 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldCacheResolvedResults;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)version;
@end

