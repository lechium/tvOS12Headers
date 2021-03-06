/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVControlServices-Structs.h>
#import <TVControlServices/TVCSEndpoint.h>

@class NSNumber;

@interface TVCSPairedEndpoint : TVCSEndpoint {

	NSNumber* _pairingIdentifier;

}

@property (nonatomic,copy) NSNumber * pairingIdentifier;              //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPairingIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)pairingIdentifier;
-(BOOL)_isEqualToPairedEndpoint:(id)arg1 ;
-(void)_cloneFromPairedEndpoint:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

