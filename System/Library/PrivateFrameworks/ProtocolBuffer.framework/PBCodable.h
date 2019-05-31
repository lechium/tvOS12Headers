/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)formattedText;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

