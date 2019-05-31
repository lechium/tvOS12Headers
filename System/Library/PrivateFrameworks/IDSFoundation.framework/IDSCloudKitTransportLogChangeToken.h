/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class IDSCKServerChangeToken;

@interface IDSCloudKitTransportLogChangeToken : NSObject <NSSecureCoding> {

	IDSCKServerChangeToken* _ckToken;

}

@property (nonatomic,retain) IDSCKServerChangeToken * ckToken;              //@synthesize ckToken=_ckToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(IDSCKServerChangeToken *)ckToken;
-(void)setCkToken:(IDSCKServerChangeToken *)arg1 ;
-(id)initWithCKToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
