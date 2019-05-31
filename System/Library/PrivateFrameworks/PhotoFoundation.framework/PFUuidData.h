/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSString, NSData;

@interface PFUuidData : NSData {

	unsigned char _uuid[16];

}

@property (nonatomic,readonly) NSString * canonicalStringValue; 
@property (nonatomic,readonly) NSString * mercuryStringValue; 
@property (nonatomic,readonly) NSData * dataValue; 
@property (nonatomic,readonly) BOOL isNull; 
+(BOOL)isMercuryBase64String:(id)arg1 ;
+(BOOL)isCanonicalUuidString:(id)arg1 ;
+(BOOL)isMercuryUuidString:(id)arg1 ;
+(id)randomUuid;
+(id)uuidWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)uuidWithData:(id)arg1 ;
+(id)uuidWithString:(id)arg1 ;
+(id)nullUuid;
+(BOOL)isSupportedUuidString:(id)arg1 ;
+(id)generateUuidAsCanonicalString;
+(id)generateUuidAsMercuryString;
+(id)hostUuid;
-(NSData *)dataValue;
-(BOOL)isNull;
-(id)initWithMercuryBase64String:(id)arg1 ;
-(id)initRandom;
-(id)initNull;
-(NSString *)canonicalStringValue;
-(NSString *)mercuryStringValue;
-(unsigned long long)length;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(const void*)bytes;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(id)initWithData:(id)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
@end

