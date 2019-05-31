/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKHeaderElement;

@interface IKCollectionElement : IKViewElement {

	NSArray* _sections;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * sections; 
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(NSArray *)sections;
-(IKHeaderElement *)header;
@end
