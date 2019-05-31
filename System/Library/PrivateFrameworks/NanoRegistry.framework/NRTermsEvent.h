/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRPBTermsEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NRTermsEvent : NRPBTermsEvent <NSSecureCoding> {

	BOOL _writable;
	NSString* _termsDigest;

}

@property (nonatomic,retain) NSString * termsDigest;              //@synthesize termsDigest=_termsDigest - In the implementation block
@property (assign,nonatomic) BOOL writable;                       //@synthesize writable=_writable - In the implementation block
+(id)pathToTermsCache;
+(id)stringForEventType:(unsigned long long)arg1 ;
+(id)digestFromData:(id)arg1 ;
+(id)pathToTermsWithDigest:(id)arg1 ;
+(BOOL)shouldAllowArchivingOfTermsTextToFile;
+(id)loadTermsWithPath:(id)arg1 ;
+(id)eventWithProtobuf:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setEventType:(int)arg1 ;
-(void)setEventDate:(double)arg1 ;
-(void)setWritable:(BOOL)arg1 ;
-(void)setTermsText:(id)arg1 ;
-(void)setDocumentationID:(id)arg1 ;
-(void)setPresentationReason:(id)arg1 ;
-(void)setPresentationLocation:(int)arg1 ;
-(void)setAcknowledgedDeviceName:(id)arg1 ;
-(void)setAcknowledgedDeviceSerialNumber:(id)arg1 ;
-(void)setDisplayDeviceName:(id)arg1 ;
-(void)setDisplayDeviceSerialNumber:(id)arg1 ;
-(void)setLoggingProcessName:(id)arg1 ;
-(void)saveTerms;
-(void)_setEventType:(unsigned long long)arg1 ;
-(void)updateEventDate;
-(void)_setLoggingProcessName:(id)arg1 ;
-(NSString *)termsDigest;
-(void)setTermsDigest:(NSString *)arg1 ;
-(BOOL)writable;
-(id)initWithDeviceID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
