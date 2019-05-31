/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@interface CKDCancelToken : NSObject <CKDCancelling> {

	BOOL _isCancelled;
	/*^block*/id _cancelAction;

}

@property (nonatomic,copy) id cancelAction;              //@synthesize cancelAction=_cancelAction - In the implementation block
-(void)setCancelAction:(id)arg1 ;
-(id)cancelAction;
-(void)cancel;
-(BOOL)isCancelled;
@end

