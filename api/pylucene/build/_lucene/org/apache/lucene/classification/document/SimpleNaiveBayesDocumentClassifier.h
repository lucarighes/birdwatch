#ifndef org_apache_lucene_classification_document_SimpleNaiveBayesDocumentClassifier_H
#define org_apache_lucene_classification_document_SimpleNaiveBayesDocumentClassifier_H

#include "org/apache/lucene/classification/SimpleNaiveBayesClassifier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace classification {
        class ClassificationResult;
        namespace document {
          class DocumentClassifier;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
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
      namespace classification {
        namespace document {

          class SimpleNaiveBayesDocumentClassifier : public ::org::apache::lucene::classification::SimpleNaiveBayesClassifier {
           public:
            enum {
              mid_init$_1fa2d44d9299bda3,
              mid_assignClass_7ffc5762e9e5efc8,
              mid_getClasses_f88498c88ae02b70,
              mid_getClasses_3c35cce6258f355e,
              mid_getTokenArray_5e50add6ee608329,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleNaiveBayesDocumentClassifier(jobject obj) : ::org::apache::lucene::classification::SimpleNaiveBayesClassifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleNaiveBayesDocumentClassifier(const SimpleNaiveBayesDocumentClassifier& obj) : ::org::apache::lucene::classification::SimpleNaiveBayesClassifier(obj) {}

            SimpleNaiveBayesDocumentClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::Map &, const JArray< ::java::lang::String > &);

            ::org::apache::lucene::classification::ClassificationResult assignClass(const ::org::apache::lucene::document::Document &) const;
            ::java::util::List getClasses(const ::org::apache::lucene::document::Document &) const;
            ::java::util::List getClasses(const ::org::apache::lucene::document::Document &, jint) const;
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
      namespace classification {
        namespace document {
          extern PyType_Def PY_TYPE_DEF(SimpleNaiveBayesDocumentClassifier);
          extern PyTypeObject *PY_TYPE(SimpleNaiveBayesDocumentClassifier);

          class t_SimpleNaiveBayesDocumentClassifier {
          public:
            PyObject_HEAD
            SimpleNaiveBayesDocumentClassifier object;
            static PyObject *wrap_Object(const SimpleNaiveBayesDocumentClassifier&);
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
