/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFOfflineCacheReplayContextTransformation.h>

@class NSString;

@interface _MFReplaceTemporaryIDForTransferFailureReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {

	NSString* _temporaryID;
	NSString* _newTemporaryID;

}
-(void)applyToReplayContext:(id)arg1 ;
-(id)initWithTemporaryID:(id)arg1 newTemporaryID:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

