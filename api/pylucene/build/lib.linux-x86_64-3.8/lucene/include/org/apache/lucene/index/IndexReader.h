#ifndef org_apache_lucene_index_IndexReader_H
#define org_apache_lucene_index_IndexReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Terms;
        class Fields;
        class LeafReaderContext;
        class Term;
        class IndexReaderContext;
        class IndexReader$CacheHelper;
        class StoredFieldVisitor;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace util {
    class Set;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexReader : public ::java::lang::Object {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_decRef_f2cc1bce94666404,
            mid_docFreq_d7008d5a6820eefc,
            mid_document_ee5990b4c3dd7dcd,
            mid_document_8f45e7464506ed2f,
            mid_document_e39e052dfc96e56b,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getContext_f9451e8f83eb5b68,
            mid_getDocCount_a5a7d1128e9e2bb7,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_getRefCount_9972fcc56b44e79d,
            mid_getSumDocFreq_b1e05207ec98e246,
            mid_getSumTotalTermFreq_b1e05207ec98e246,
            mid_getTermVector_1bb595a580fb0404,
            mid_getTermVectors_9997c94b783ad8be,
            mid_hasDeletions_8454bd5aa23fd11e,
            mid_hashCode_9972fcc56b44e79d,
            mid_incRef_f2cc1bce94666404,
            mid_leaves_49ec78390f08338a,
            mid_maxDoc_9972fcc56b44e79d,
            mid_numDeletedDocs_9972fcc56b44e79d,
            mid_numDocs_9972fcc56b44e79d,
            mid_registerParentReader_9c5103ca988341a1,
            mid_totalTermFreq_4edac0e8611d73f1,
            mid_tryIncRef_8454bd5aa23fd11e,
            mid_doClose_f2cc1bce94666404,
            mid_ensureOpen_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexReader(const IndexReader& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void decRef() const;
          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::document::Document document(jint) const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::document::Document document(jint, const ::java::util::Set &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::IndexReaderContext getContext() const;
          jint getDocCount(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          jint getRefCount() const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Terms getTermVector(jint, const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          jboolean hasDeletions() const;
          jint hashCode() const;
          void incRef() const;
          ::java::util::List leaves() const;
          jint maxDoc() const;
          jint numDeletedDocs() const;
          jint numDocs() const;
          void registerParentReader(const IndexReader &) const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
          jboolean tryIncRef() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexReader);
        extern PyTypeObject *PY_TYPE(IndexReader);

        class t_IndexReader {
        public:
          PyObject_HEAD
          IndexReader object;
          static PyObject *wrap_Object(const IndexReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
