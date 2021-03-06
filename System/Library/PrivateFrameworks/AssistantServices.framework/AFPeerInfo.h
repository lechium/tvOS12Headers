/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSSecureCoding> {

	NSString* _idsIdentifier;
	NSString* _idsFirstRoutableInternetDestination;

}

@property (nonatomic,copy) NSString * idsIdentifier;                                    //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsFirstRoutableInternetDestination;              //@synthesize idsFirstRoutableInternetDestination=_idsFirstRoutableInternetDestination - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)idsFirstRoutableInternetDestination;
-(void)setIdsFirstRoutableInternetDestination:(NSString *)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSString *)idsIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
@end

