#ifndef org_apache_lucene_index_BaseCompositeReader_H
#define org_apache_lucene_index_BaseCompositeReader_H

#include "org/apache/lucene/index/CompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
        class Term;
        class StoredFieldVisitor;
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
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class BaseCompositeReader : public ::org::apache::lucene::index::CompositeReader {
         public:
          enum {
            mid_docFreq_d7008d5a6820eefc,
            mid_document_8f45e7464506ed2f,
            mid_getDocCount_a5a7d1128e9e2bb7,
            mid_getSumDocFreq_b1e05207ec98e246,
            mid_getSumTotalTermFreq_b1e05207ec98e246,
            mid_getTermVectors_9997c94b783ad8be,
            mid_maxDoc_9972fcc56b44e79d,
            mid_numDocs_9972fcc56b44e79d,
            mid_totalTermFreq_4edac0e8611d73f1,
            mid_readerIndex_1e143afe1894d213,
            mid_readerBase_1e143afe1894d213,
            mid_getSequentialSubReaders_49ec78390f08338a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseCompositeReader(jobject obj) : ::org::apache::lucene::index::CompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseCompositeReader(const BaseCompositeReader& obj) : ::org::apache::lucene::index::CompositeReader(obj) {}

          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          jint getDocCount(const ::java::lang::String &) const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          jint maxDoc() const;
          jint numDocs() const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
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
        extern PyType_Def PY_TYPE_DEF(BaseCompositeReader);
        extern PyTypeObject *PY_TYPE(BaseCompositeReader);

        class t_BaseCompositeReader {
        public:
          PyObject_HEAD
          BaseCompositeReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BaseCompositeReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BaseCompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BaseCompositeReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
