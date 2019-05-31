/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppNavigationController.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppNavigationController;
@class NSString, IKAppContext, NSMutableArray;

@interface IKDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, IKDOMFeature> {

	id<IKAppNavigationController> _appNavigationController;
	NSMutableArray* _stackItems;
	NSString* _featureName;
	IKAppContext* _appContext;
	id<IKAppNavigationController> _navigationController;

}

@property (nonatomic,retain) id<IKAppNavigationController> navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(NSString *)featureName;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(IKAppContext *)appContext;
-(void)popDocument;
-(id)documents;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(id<IKAppNavigationController>)navigationController;
-(void)clear;
-(void)setNavigationController:(id<IKAppNavigationController>)arg1 ;
@end

