/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MAGraph.h>

@interface MAAbstractGraph : MAGraph
+(Class)nodeClass;
+(Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(Class)edgeClass;
+(Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(unsigned short)_labelForString:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)stringForLabel:(unsigned short)arg1 ;
-(id)_keyForLabelString:(id)arg1 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(void)_setLabelStrings:(id)arg1 ;
-(id)_labelStrings;
-(id)initWithGraphMLURL:(id)arg1 ;
-(id)initWithPersistentStoreURL:(id)arg1 ;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)initWithDataURL:(id)arg1 ;
@end

