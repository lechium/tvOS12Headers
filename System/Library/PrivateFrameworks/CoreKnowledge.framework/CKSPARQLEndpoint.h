/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKKnowledgeStore;

@interface CKSPARQLEndpoint : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}
-(id)initWithKnowledgeStore:(id)arg1 ;
-(id)sparqlResultsForQuery:(id)arg1 error:(id*)arg2 ;
-(void)importTriplesFromFileAtPath:(id)arg1 ;
@end

