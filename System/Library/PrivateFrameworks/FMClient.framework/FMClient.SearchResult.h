/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface FMClient.SearchResult : NSObject <NSSecureCoding> {

	 devices;
	 resultCode;

}

@property (copy,nonatomic) NSArray * devices; 
@property (assign,nonatomic) long long resultCode; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(void)setResultCode:(long long)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(long long)resultCode;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
@end

