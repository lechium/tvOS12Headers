/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3 ;
-(void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
-(void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2 ;
-(void)domStorageItemsClearedWithStorageId:(id)arg1 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
@end

