/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString, NSData;

@interface SFCertificate_Ivars : NSObject {

	long long certificateType;
	NSString* subject;
	NSString* issuerName;
	NSData* serialNumber;
	SecCertificateRef secCertificate;

}
@end

