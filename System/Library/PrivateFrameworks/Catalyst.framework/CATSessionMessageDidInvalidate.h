/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATSessionMessage.h>

@class NSError;

@interface CATSessionMessageDidInvalidate : CATSessionMessage {

	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

