/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SSVSAPContext;
@class NSString, NSArray, NSDictionary;

@interface SSVPlatformContext : NSObject <NSCopying> {

	NSString* _lookupURLString;
	id<SSVSAPContext> _sapContext;
	NSArray* _signedHeaders;
	NSArray* _signedQueryParameters;
	NSString* _unpersonalizedLookupURLString;

}

@property (nonatomic,readonly) NSDictionary * bagDictionary; 
@property (nonatomic,readonly) NSString * lookupURLString;                            //@synthesize lookupURLString=_lookupURLString - In the implementation block
@property (nonatomic,readonly) NSString * unpersonalizedLookupURLString;              //@synthesize unpersonalizedLookupURLString=_unpersonalizedLookupURLString - In the implementation block
@property (nonatomic,readonly) NSArray * signedHeaders;                               //@synthesize signedHeaders=_signedHeaders - In the implementation block
@property (nonatomic,readonly) NSArray * signedQueryParameters;                       //@synthesize signedQueryParameters=_signedQueryParameters - In the implementation block
@property (nonatomic,retain) id<SSVSAPContext> SAPContext;                            //@synthesize sapContext=_sapContext - In the implementation block
-(id)initWithLookupURL:(id)arg1 unpersonalizedLookupURL:(id)arg2 signedHeaders:(id)arg3 signedQueryParameters:(id)arg4 ;
-(id)initWithBagDictionary:(id)arg1 ;
-(NSString *)lookupURLString;
-(id<SSVSAPContext>)SAPContext;
-(void)setSAPContext:(id<SSVSAPContext>)arg1 ;
-(NSArray *)signedHeaders;
-(NSArray *)signedQueryParameters;
-(NSString *)unpersonalizedLookupURLString;
-(NSDictionary *)bagDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

