/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _SFKeychainFetchResult : NSObject {

	id _keychainFetchResultInternal;

}

@property (readonly) long long resultType; 
@property (readonly) id value; 
@property (readonly) NSError * error; 
+(id)fetchResultWithValue:(id)arg1 ;
+(id)fetchResultWithError:(id)arg1 ;
-(long long)resultType;
-(id)initWithValue:(id)arg1 ;
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithError:(id)arg1 ;
-(id)value;
-(NSError *)error;
@end

