#ifndef org_apache_lucene_queries_function_IndexReaderFunctions_H
#define org_apache_lucene_queries_function_IndexReaderFunctions_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LongValuesSource;
        class DoubleValuesSource;
      }
      namespace index {
        class Term;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class IndexReaderFunctions : public ::java::lang::Object {
           public:
            enum {
              mid_docCount_ff23b83f44e75cdf,
              mid_docFreq_c3af75bc48267e62,
              mid_maxDoc_ccca60747b1553ac,
              mid_numDeletedDocs_ccca60747b1553ac,
              mid_numDocs_ccca60747b1553ac,
              mid_sumDocFreq_ff23b83f44e75cdf,
              mid_sumTotalTermFreq_f99a170202280759,
              mid_termFreq_c3af75bc48267e62,
              mid_totalTermFreq_c3af75bc48267e62,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexReaderFunctions(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexReaderFunctions(const IndexReaderFunctions& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::DoubleValuesSource docCount(const ::java::lang::String &);
            static ::org::apache::lucene::search::DoubleValuesSource docFreq(const ::org::apache::lucene::index::Term &);
            static ::org::apache::lucene::search::DoubleValuesSource maxDoc();
            static ::org::apache::lucene::search::DoubleValuesSource numDeletedDocs();
            static ::org::apache::lucene::search::DoubleValuesSource numDocs();
            static ::org::apache::lucene::search::DoubleValuesSource sumDocFreq(const ::java::lang::String &);
            static ::org::apache::lucene::search::LongValuesSource sumTotalTermFreq(const ::java::lang::String &);
            static ::org::apache::lucene::search::DoubleValuesSource termFreq(const ::org::apache::lucene::index::Term &);
            static ::org::apache::lucene::search::DoubleValuesSource totalTermFreq(const ::org::apache::lucene::index::Term &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          extern PyType_Def PY_TYPE_DEF(IndexReaderFunctions);
          extern PyTypeObject *PY_TYPE(IndexReaderFunctions);

          class t_IndexReaderFunctions {
          public:
            PyObject_HEAD
            IndexReaderFunctions object;
            static PyObject *wrap_Object(const IndexReaderFunctions&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
