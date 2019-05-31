/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding> {

	BOOL _includeUntrustedDevices;
	BOOL _includeFamilyDevices;
	NSString* _altDSID;
	NSArray* _services;
	NSArray* _operatingSystems;

}

@property (nonatomic,copy) NSString * altDSID;                          //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) BOOL includeUntrustedDevices;              //@synthesize includeUntrustedDevices=_includeUntrustedDevices - In the implementation block
@property (assign,nonatomic) BOOL includeFamilyDevices;                 //@synthesize includeFamilyDevices=_includeFamilyDevices - In the implementation block
@property (nonatomic,copy) NSArray * services;                          //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) NSArray * operatingSystems;                  //@synthesize operatingSystems=_operatingSystems - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)includeUntrustedDevices;
-(void)setIncludeUntrustedDevices:(BOOL)arg1 ;
-(BOOL)includeFamilyDevices;
-(void)setIncludeFamilyDevices:(BOOL)arg1 ;
-(NSArray *)operatingSystems;
-(void)setOperatingSystems:(NSArray *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)altDSID;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

