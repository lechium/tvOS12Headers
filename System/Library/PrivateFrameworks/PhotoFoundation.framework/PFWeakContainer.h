/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject {

	_PFWeakContainerSentenal* _sentenal;
	id _nilNotificationDelegate;

}
-(void)setNilNotificationDelegate:(id)arg1 ;
-(void)trackWeakObjectDealloc:(id)arg1 ;
-(void)weakReferenceBecameNil;
-(BOOL)isTrackingWeakObjectDealloc:(id)arg1 ;
-(void)stopTrackingWeakObjectDealloc:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
